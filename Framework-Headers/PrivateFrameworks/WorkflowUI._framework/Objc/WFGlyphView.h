//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFIconView.h>

@class UIColor, WFWorkflowIconDrawer;

@interface WFGlyphView : WFIconView
{
    BOOL _outline;
    WFWorkflowIconDrawer *_iconDrawer;
    struct UIEdgeInsets _glyphInsets;
}

@property (nonatomic) unsigned short glyphCharacter;
@property (strong, nonatomic) UIColor *glyphColor;
@property (nonatomic) struct UIEdgeInsets glyphInsets; // @synthesize glyphInsets=_glyphInsets;
@property (readonly, nonatomic) WFWorkflowIconDrawer *iconDrawer; // @synthesize iconDrawer=_iconDrawer;
@property (nonatomic) BOOL outline; // @synthesize outline=_outline;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)redrawIcon;

@end
