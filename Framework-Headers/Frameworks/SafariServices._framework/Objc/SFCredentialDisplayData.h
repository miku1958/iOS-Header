//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, WBSCredentialMatch;

__attribute__((visibility("hidden")))
@interface SFCredentialDisplayData : NSObject
{
    WBSCredentialMatch *_match;
    NSString *_detail;
    NSDate *_creationDate;
}

@property (readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (readonly, copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property (readonly, nonatomic) WBSCredentialMatch *match; // @synthesize match=_match;

+ (id)descriptionForPasswordWithUser:(id)arg1 creationDate:(id)arg2;
- (void).cxx_destruct;
- (id)initWithMatch:(id)arg1 detail:(id)arg2 creationDate:(id)arg3;

@end

