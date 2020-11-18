//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQBodyStorageGenerator-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQHBodyStorage : NSObject <GQBodyStorageGenerator>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)handleBodyStorage:(id)arg1 state:(id)arg2;
+ (int)handleContainerHint:(id)arg1 state:(id)arg2;
+ (int)handleFootnotes:(id)arg1 state:(id)arg2;
+ (int)handleLayout:(id)arg1 state:(id)arg2;
+ (int)handlePageStart:(id)arg1 state:(id)arg2;
+ (int)handleSection:(id)arg1 state:(id)arg2;
+ (int)handleTocContent:(id)arg1 state:(id)arg2;
+ (int)handleTocEntry:(id)arg1 state:(id)arg2;

@end

