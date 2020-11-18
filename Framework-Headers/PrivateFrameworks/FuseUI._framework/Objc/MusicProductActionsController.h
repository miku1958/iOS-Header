//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>

@class MusicClientContext, MusicProductActionsTemplateViewElement, NSDictionary, NSString, SKUIClientContext;

@interface MusicProductActionsController : NSObject <MusicClientContextConsuming>
{
    MusicProductActionsTemplateViewElement *_templateViewElement;
    NSDictionary *_extraInfo;
    MusicClientContext *_clientContext;
}

@property (strong, nonatomic) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithTemplateViewElement:(id)arg1 clientContext:(id)arg2 extraInfo:(id)arg3;

@end

