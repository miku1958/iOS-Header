//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol HFIconDescriptor;

@interface HFServiceIconSet : NSObject
{
    NSSet *_allIcons;
    id<HFIconDescriptor> _defaultIcon;
}

@property (readonly, nonatomic) NSSet *allIcons; // @synthesize allIcons=_allIcons;
@property (readonly, nonatomic) id<HFIconDescriptor> defaultIcon; // @synthesize defaultIcon=_defaultIcon;

+ (id)placeholderIconSet;
+ (id)setWithDefaultIcon:(id)arg1;
+ (id)setWithDefaultIcon:(id)arg1 alternateIcons:(id)arg2;
+ (id)setWithImageIdentifier:(id)arg1;
- (void).cxx_destruct;

@end

