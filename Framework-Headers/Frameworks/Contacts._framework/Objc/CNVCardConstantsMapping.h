//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CNVCardConstantsMapping : NSObject
{
    NSDictionary *_mapping;
}

@property (strong, nonatomic) NSDictionary *mapping; // @synthesize mapping=_mapping;

+ (id)CNToVCardInstantMessageConstantsMapping;
+ (id)CNToVCardSocialProfileConstantsMapping;
+ (id)vCardToCNInstantMessageConstantsMapping;
+ (id)vCardToCNSocialProfileConstantsMapping;
- (void)dealloc;
- (id)initWithMapping:(id)arg1;
- (id)invertedMapping;
- (id)mappedConstant:(id)arg1;

@end

