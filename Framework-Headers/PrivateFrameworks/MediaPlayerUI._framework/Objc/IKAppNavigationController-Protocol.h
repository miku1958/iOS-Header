//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayerUI/NSObject-Protocol.h>

@class IKAppDocument, NSArray, NSDictionary;

@protocol IKAppNavigationController <NSObject>
- (NSArray *)documents;
- (void)insertDocument:(IKAppDocument *)arg1 beforeDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)popDocument;
- (void)popToDocument:(IKAppDocument *)arg1;
- (void)popToRootDocument;
- (void)pushDocument:(IKAppDocument *)arg1 options:(NSDictionary *)arg2;
- (void)removeDocument:(IKAppDocument *)arg1;
- (void)replaceDocument:(IKAppDocument *)arg1 withDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;

@optional
- (void)clear;
- (void)dismissModal;
- (void)presentModal:(IKAppDocument *)arg1 options:(NSDictionary *)arg2;
@end

