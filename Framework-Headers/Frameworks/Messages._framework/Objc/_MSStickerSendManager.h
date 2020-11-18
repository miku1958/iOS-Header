//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Messages/_MSStickerSendManagerDelegate-Protocol.h>

@class NSString;
@protocol _MSStickerSendManagerDelegate;

@interface _MSStickerSendManager : NSObject <_MSStickerSendManagerDelegate>
{
    id<_MSStickerSendManagerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_MSStickerSendManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)insertSticker:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startDragSticker:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

