<?php

namespace Rector\Tests\Symfony5\Rector\MethodCall\FormBuilderSetDataMapperRector\Fixture;

class SkipNotFormBuilder
{
    public function run()
    {
        $d = new \DateTime('now');
        $d->format('Y-m-d');
    }
}
