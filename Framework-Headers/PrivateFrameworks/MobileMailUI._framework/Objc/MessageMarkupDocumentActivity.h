//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

@protocol ContentRepresentationHandlingDelegate;

@interface MessageMarkupDocumentActivity : UIActivity
{
    id<ContentRepresentationHandlingDelegate> _delegate;
    long long _context;
}

@property (nonatomic) long long context; // @synthesize context=_context;
@property (weak, nonatomic) id<ContentRepresentationHandlingDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2;
- (void)performActivity;

@end
