//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGMessageKey.h>

@class NSString;

@interface SGInteractionKey : SGMessageKey
{
}

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *personHandle;

+ (BOOL)isSupportedEntityType:(long long)arg1;
- (id)description;
- (id)init;
- (id)initWithBundleId:(id)arg1 personHandle:(id)arg2;
- (id)initWithSource:(id)arg1 uniqueIdentifier:(id)arg2;

@end

