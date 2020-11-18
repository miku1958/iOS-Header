//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TSUWarning : NSObject
{
    long long _kind;
    NSString *_message;
    NSString *_detailMessage;
    NSDictionary *_userInfo;
}

@property (copy, nonatomic) NSString *detailMessage; // @synthesize detailMessage=_detailMessage;
@property (readonly, nonatomic) long long kind; // @synthesize kind=_kind;
@property (readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property (readonly, nonatomic) long long severity;
@property (copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

+ (id)fontWarningWithMessage:(id)arg1 fontNames:(id)arg2;
+ (id)warningWithKind:(long long)arg1 message:(id)arg2;
+ (id)warningWithMessage:(id)arg1;
+ (id)warningWithMessage:(id)arg1 affectedObject:(id)arg2;
+ (id)warningWithMessage:(id)arg1 affectedObjects:(id)arg2;
- (void).cxx_destruct;
- (void)addAffectedObjects:(id)arg1;
- (id)affectedObjects;
- (unsigned long long)hash;
- (id)initWithKind:(long long)arg1 message:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFontWarning;
- (void)setAffectedObjects:(id)arg1;

@end

