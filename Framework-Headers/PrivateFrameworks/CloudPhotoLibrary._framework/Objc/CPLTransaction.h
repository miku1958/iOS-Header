//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CPLTransaction : NSObject
{
    BOOL _dirty;
    NSString *_identifier;
}

@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

+ (void)beginTransactionWithIdentifier:(id)arg1 description:(id)arg2 keepPower:(BOOL)arg3;
+ (void)endTransactionWithIdentifier:(id)arg1;
+ (id)newTransactionWithIdentifier:(id)arg1 description:(id)arg2 keepPower:(BOOL)arg3;
+ (unsigned long long)transactionCount;
+ (id)transactions;
- (void).cxx_destruct;
- (void)dealloc;
- (void)endTransaction;
- (id)initWithIdentifier:(id)arg1 description:(id)arg2 keepPower:(BOOL)arg3;

@end

