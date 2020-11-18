//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPStyleProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPStorageStyleProvider : NSObject <TSWPStyleProvider>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBoldItalicUnderlineShortcuts;

+ (id)styleProviderForStorage:(id)arg1;
- (id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

@end

