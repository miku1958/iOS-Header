//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDContainerRep.h>

#import <PagesQuicklook/TSWPRepParent-Protocol.h>

@class NSObject, NSString;
@protocol TSDContainerInfo;

@interface TPFootnoteContainerRep : TSDContainerRep <TSWPRepParent>
{
}

@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext *)arg1;
- (BOOL)p_hasContent;

@end

