//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

#import <CloudKitDaemon/CKLParsedObject-Protocol.h>

@class NSString;

@interface NSDate (CKHack) <CKLParsedObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)CKSharedCalendar;
+ (id)ck_dateFormatterWithString:(id)arg1;
+ (id)ck_dateWithNaturalLanguageString:(id)arg1;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
@end

