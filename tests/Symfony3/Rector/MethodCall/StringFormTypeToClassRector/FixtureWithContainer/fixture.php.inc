<?php

namespace Rector\Tests\Symfony3\Rector\Form\StringFormTypeToClassRector\FixtureWithContainer;

use Symfony\Component\Form\FormBuilder;

final class SomePresenter
{
    public function action()
    {
        $formBuilder = new FormBuilder();
        $formBuilder->add('task', 'vich_image');
    }
}

?>
-----
<?php

namespace Rector\Tests\Symfony3\Rector\Form\StringFormTypeToClassRector\FixtureWithContainer;

use Symfony\Component\Form\FormBuilder;

final class SomePresenter
{
    public function action()
    {
        $formBuilder = new FormBuilder();
        $formBuilder->add('task', \Vich\UploaderBundle\Form\Type\VichImageType::class);
    }
}

?>
