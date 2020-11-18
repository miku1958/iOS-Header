//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCTermDumper, NSString, PQLConnection;

__attribute__((visibility("hidden")))
@interface BRCDumpContext : NSObject
{
    long long _indentation;
    BRCTermDumper *_termDumper;
    BOOL _liveDaemon;
    BOOL _onlyActiveStuff;
    struct __sFILE *_fp;
    PQLConnection *_db;
    NSString *_indentationBaseString;
}

@property (readonly, nonatomic) PQLConnection *db; // @synthesize db=_db;
@property (readonly, nonatomic) struct __sFILE *fp; // @synthesize fp=_fp;
@property (strong, nonatomic) NSString *indentationBaseString; // @synthesize indentationBaseString=_indentationBaseString;
@property (nonatomic) BOOL liveDaemon; // @synthesize liveDaemon=_liveDaemon;
@property (nonatomic) BOOL onlyActiveStuff; // @synthesize onlyActiveStuff=_onlyActiveStuff;

+ (id)highlightedString:(id)arg1 type:(long long)arg2 context:(id)arg3;
+ (id)stringFromBackoff:(double)arg1 context:(id)arg2;
+ (id)stringFromByteCount:(long long)arg1 context:(id)arg2;
+ (id)stringFromByteCount:(long long)arg1 showActualByteCount:(BOOL)arg2 suffix:(id)arg3 context:(id)arg4;
+ (id)stringFromDueDate:(id)arg1 now:(id)arg2 allowsPast:(BOOL)arg3 context:(id)arg4;
+ (id)stringFromDueStamp:(unsigned long long)arg1 now:(unsigned long long)arg2 allowsPast:(BOOL)arg3 context:(id)arg4;
+ (id)stringFromError:(id)arg1 context:(id)arg2;
+ (id)stringFromErrorString:(id)arg1 context:(id)arg2;
+ (id)stringFromItemAsString:(id)arg1 context:(id)arg2;
+ (id)stringFromItemID:(id)arg1 context:(id)arg2;
+ (id)stringFromOperationUUID:(unsigned char [16])arg1 context:(id)arg2;
+ (id)stringFromThrottleState:(int)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (id)highlightedString:(id)arg1 type:(long long)arg2;
- (id)initWithFile:(struct __sFILE *)arg1 db:(id)arg2;
- (void)popIndentation;
- (void)pushIndentation;
- (void)writeLineWithFormat:(id)arg1;

@end

