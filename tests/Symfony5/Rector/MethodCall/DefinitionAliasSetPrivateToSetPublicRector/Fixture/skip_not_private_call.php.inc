<?php

namespace Rector\Tests\Symfony5\Rector\MethodCall\DefinitionAliasSetPrivateToSetPublicRector\Fixture;

use Symfony\Component\DependencyInjection\Alias;
use Symfony\Component\DependencyInjection\Definition;

class SkipNotPrivateCall
{
    public function run()
    {
        $definition = new Definition('Example\Foo');
        $definition->setPublic(true);

        $alias = new Alias('Example\Foo');
        $alias->setPublic(true);
    }
}
