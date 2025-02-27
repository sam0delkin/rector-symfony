<?php

namespace Rector\Tests\Symfony4\Rector\MethodCall\FormIsValidRector\Fixture;

use Symfony\Component\Form\Form;

class SomeController
{
    public function action()
    {
        $form = new Form();

        if ($form->isValid()) {
            $this->processForm($form);
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Symfony4\Rector\MethodCall\FormIsValidRector\Fixture;

use Symfony\Component\Form\Form;

class SomeController
{
    public function action()
    {
        $form = new Form();

        if ($form->isSubmitted() && $form->isValid()) {
            $this->processForm($form);
        }
    }
}

?>
