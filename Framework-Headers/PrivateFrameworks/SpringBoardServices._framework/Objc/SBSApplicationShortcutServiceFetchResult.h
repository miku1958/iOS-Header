//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSXPCCoding-Protocol.h>
#import <SpringBoardServices/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface SBSApplicationShortcutServiceFetchResult : NSObject <BSXPCCoding, NSCopying>
{
    NSArray *_staticApplicationShortcutItems;
    NSArray *_dynamicApplicationShortcutItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *dynamicApplicationShortcutItems; // @synthesize dynamicApplicationShortcutItems=_dynamicApplicationShortcutItems;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *staticApplicationShortcutItems; // @synthesize staticApplicationShortcutItems=_staticApplicationShortcutItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithStaticApplicationShortcutItems:(id)arg1 dynamicApplicationShortcutItems:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

