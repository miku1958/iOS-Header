//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Parsec/PRSFeedback.h>

@class NSString;

@interface PRSPreviewFeedback : PRSFeedback
{
    NSString *_local_result;
    NSString *_fbr;
    long long _dpos;
}

@property (nonatomic) long long dpos; // @synthesize dpos=_dpos;
@property (strong, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property (strong, nonatomic) NSString *local_result; // @synthesize local_result=_local_result;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 timestamp:(long long)arg2;
- (id)plist;
- (id)type;
- (void)validate;

@end

