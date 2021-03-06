//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICSQLiteBinding-Protocol.h>

@class ICSQLiteStatement, NSNumber, NSString;

@interface ICSQLiteQueryResults : NSObject <ICSQLiteBinding>
{
    ICSQLiteStatement *_statement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long firstInt64Value;
@property (readonly, copy, nonatomic) NSNumber *firstNumberValue;
@property (readonly, copy, nonatomic) NSString *firstStringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)bindData:(id)arg1 atPosition:(int)arg2;
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;
- (void)bindInt:(int)arg1 atPosition:(int)arg2;
- (void)bindNullAtPosition:(int)arg1;
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;
- (void)bindString:(id)arg1 atPosition:(int)arg2;
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;
- (int)clearBindings;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithStatement:(id)arg1;

@end

