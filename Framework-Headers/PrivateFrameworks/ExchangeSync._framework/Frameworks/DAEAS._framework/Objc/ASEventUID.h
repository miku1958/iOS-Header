//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DAEAS/ASParsingLeafNode-Protocol.h>
#import <DAEAS/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface ASEventUID : NSObject <ASParsingLeafNode, NSCopying>
{
    NSDate *_exceptionDate;
    NSString *_uidWithoutExceptionDate;
    BOOL _isOutlookCreatedUid;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)expectsContent;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
- (void).cxx_destruct;
- (id)_uidStringBySettingExceptionDateInOutlookUUIDString:(id)arg1 withTimeZone:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)exceptionDate;
- (id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6;
- (id)initWithCalFrameworkString:(id)arg1;
- (id)initWithGlobalObjectIdString:(id)arg1;
- (id)initWithUidString:(id)arg1;
- (int)parsingState;
- (id)recurrenceIDForResponseEmail;
- (void)setExceptionDate:(id)arg1;
- (id)uidForActiveSyncWithTimeZone:(id)arg1;
- (id)uidForCalFramework;
- (id)uidForResponseEmailWithTimeZone:(id)arg1;
- (id)uidFromGlobalObjId:(id)arg1 outIsOutlookCreatedUid:(BOOL *)arg2;
- (id)uidWithoutExceptionDate;

@end

