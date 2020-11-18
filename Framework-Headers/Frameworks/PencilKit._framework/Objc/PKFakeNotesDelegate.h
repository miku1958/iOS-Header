//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKScribbleInteractionDelegate-Protocol.h>

@class NSString, UITextView;

@interface PKFakeNotesDelegate : NSObject <PKScribbleInteractionDelegate>
{
    UITextView *_textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint)arg2;
- (void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;
- (id)initWithTextView:(id)arg1;

@end
