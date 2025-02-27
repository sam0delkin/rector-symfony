<?php

namespace Rector\Tests\Symfony4\Rector\MethodCall\MakeDispatchFirstArgumentEventRector\Fixture;

use Symfony\Contracts\EventDispatcher\EventDispatcherInterface;

class SomeClass
{
    public function run(EventDispatcherInterface $eventDisptacher)
    {
        $eventDisptacher->dispatch('event_name', new Event());

        $eventDisptacher->dispatch(new Event(), 'event_name');
    }
}

?>
-----
<?php

namespace Rector\Tests\Symfony4\Rector\MethodCall\MakeDispatchFirstArgumentEventRector\Fixture;

use Symfony\Contracts\EventDispatcher\EventDispatcherInterface;

class SomeClass
{
    public function run(EventDispatcherInterface $eventDisptacher)
    {
        $eventDisptacher->dispatch(new Event(), 'event_name');

        $eventDisptacher->dispatch(new Event(), 'event_name');
    }
}

?>
