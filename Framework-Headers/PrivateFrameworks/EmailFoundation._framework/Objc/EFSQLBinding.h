//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLBindable-Protocol.h>

@class NSString;

@interface EFSQLBinding : NSObject <EFSQLBindable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) EFSQLBinding *ef_SQLBinding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)bindingWithData:(id)arg1;
+ (id)bindingWithDouble:(double)arg1;
+ (id)bindingWithInt64:(long long)arg1;
+ (id)bindingWithString:(id)arg1;
+ (id)nullBinding;
- (void)bindTo:(struct sqlite3_stmt *)arg1 withSQLIndex:(int)arg2;
- (void)bindToStatement:(id)arg1 usingIndex:(unsigned long long)arg2;
- (void)bindToStatement:(id)arg1 usingName:(id)arg2;

@end

