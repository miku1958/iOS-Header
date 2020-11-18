//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NCNotificationListLegibilityLabelCache : NSObject
{
    NSMutableDictionary *_sectionHeaderViewLegibilityLabelDictionary;
}

@property (strong, nonatomic) NSMutableDictionary *sectionHeaderViewLegibilityLabelDictionary; // @synthesize sectionHeaderViewLegibilityLabelDictionary=_sectionHeaderViewLegibilityLabelDictionary;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_createLegibilityLabelWithTitle:(id)arg1 font:(id)arg2;
- (id)_stringDescriptorForFont:(id)arg1;
- (void)clearAll;
- (id)init;
- (id)legibilityLabelForTitle:(id)arg1 forSuperview:(id)arg2 font:(id)arg3;

@end

