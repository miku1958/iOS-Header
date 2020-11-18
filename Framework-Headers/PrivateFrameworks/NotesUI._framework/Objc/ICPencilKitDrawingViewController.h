//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NotesUI/PKCanvasViewDelegate-Protocol.h>

@class ICAttachment, ICAttachmentPencilKitModel, NSString, PKCanvasView, UIButton;

@interface ICPencilKitDrawingViewController : UIViewController <PKCanvasViewDelegate>
{
    ICAttachment *_attachment;
    PKCanvasView *_canvas;
    UIButton *_closeButton;
}

@property (strong, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
@property (readonly, nonatomic) ICAttachmentPencilKitModel *attachmentModel;
@property (strong, nonatomic) PKCanvasView *canvas; // @synthesize canvas=_canvas;
@property (strong, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)canvasViewDidStartNewStroke:(id)arg1;
- (void)canvasViewDrawingDidChange:(id)arg1;
- (void)done:(id)arg1;
- (id)initWithAttachment:(id)arg1;
- (void)viewDidLoad;

@end

