//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITextDropRequest-Protocol.h>
#import <UIKitCore/UITextDropRequest_Private-Protocol.h>

@class NSString, UITextDropProposal, UITextPosition, UITextRange;
@protocol UIDropSession;

__attribute__((visibility("hidden")))
@interface UITextDropRequest : NSObject <UITextDropRequest_Private, UITextDropRequest>
{
    BOOL _sameView;
    id<UIDropSession> _dropSession;
    UITextPosition *_dropPosition;
    UITextRange *_dropRange;
    UITextDropProposal *_suggestedProposal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UITextPosition *dropPosition; // @synthesize dropPosition=_dropPosition;
@property (readonly, nonatomic) UITextRange *dropRange; // @synthesize dropRange=_dropRange;
@property (readonly, nonatomic) id<UIDropSession> dropSession; // @synthesize dropSession=_dropSession;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isSameView) BOOL sameView; // @synthesize sameView=_sameView;
@property (strong, nonatomic) UITextDropProposal *suggestedProposal; // @synthesize suggestedProposal=_suggestedProposal;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPosition:(id)arg1 range:(id)arg2 inSession:(id)arg3;

@end

