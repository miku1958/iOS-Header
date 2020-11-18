//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UITextDropRequest-Protocol.h>

@class NSString, UITextDropProposal, UITextPosition;
@protocol UIDropSession;

__attribute__((visibility("hidden")))
@interface UITextDropRequest : NSObject <UITextDropRequest>
{
    BOOL _sameView;
    id<UIDropSession> _dropSession;
    UITextPosition *_dropPosition;
    UITextDropProposal *_suggestedProposal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UITextPosition *dropPosition; // @synthesize dropPosition=_dropPosition;
@property (readonly, nonatomic) id<UIDropSession> dropSession; // @synthesize dropSession=_dropSession;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isSameView) BOOL sameView; // @synthesize sameView=_sameView;
@property (strong, nonatomic) UITextDropProposal *suggestedProposal; // @synthesize suggestedProposal=_suggestedProposal;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPosition:(id)arg1 inSession:(id)arg2;

@end
