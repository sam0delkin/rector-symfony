<?php

namespace Rector\Tests\Symfony3\Rector\ClassMethod\FormTypeGetParentRector\Fixture;

use Symfony\Component\Form\AbstractType;

class PermissionCollectionType extends AbstractType
{
    public function getName()
    {
        return 'some_name';
    }

    public function getParent()
    {
        return 'collection';
    }
}

?>
-----
<?php

namespace Rector\Tests\Symfony3\Rector\ClassMethod\FormTypeGetParentRector\Fixture;

use Symfony\Component\Form\AbstractType;

class PermissionCollectionType extends AbstractType
{
    public function getName()
    {
        return 'some_name';
    }

    public function getParent()
    {
        return \Symfony\Component\Form\Extension\Core\Type\CollectionType::class;
    }
}

?>
