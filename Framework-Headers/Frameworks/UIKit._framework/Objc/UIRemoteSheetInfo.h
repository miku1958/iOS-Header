//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UISpringBoardHostedView, UIView;

__attribute__((visibility("hidden")))
@interface UIRemoteSheetInfo : NSObject
{
    UIView *_sheetView;
    UISpringBoardHostedView *_remoteView;
    id _delegate;
    SEL _selector;
    void *_context;
    long long _returnCode;
}

@property (nonatomic) void *context; // @synthesize context=_context;
@property (weak, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UISpringBoardHostedView *remoteView; // @synthesize remoteView=_remoteView;
@property (nonatomic) long long returnCode; // @synthesize returnCode=_returnCode;
@property (nonatomic) SEL selector; // @synthesize selector=_selector;
@property (strong, nonatomic) UIView *sheetView; // @synthesize sheetView=_sheetView;

- (void).cxx_destruct;

@end

