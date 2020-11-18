//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKSupplementaryViewFactory : NSObject
{
    id _target;
    Class _reusableViewClass;
    SEL _configurator;
    SEL _selector;
}

@property (readonly, nonatomic) SEL configurator; // @synthesize configurator=_configurator;
@property (strong, nonatomic) Class reusableViewClass; // @synthesize reusableViewClass=_reusableViewClass;
@property (nonatomic) SEL selector; // @synthesize selector=_selector;
@property (nonatomic) id target; // @synthesize target=_target;

+ (id)factoryForClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3;
+ (id)factoryForClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 userData:(id)arg4;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (id)initWithClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 userData:(id)arg4;

@end

