//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKView.h>

#import <TemplateKit/NUIContainerViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NUIContainerGridView;
@protocol TLKImagesViewDelegate;

@interface TLKImagesView : TLKView <NUIContainerViewDelegate>
{
    BOOL _paddingDisabled;
    BOOL _selectionEnabled;
    id<TLKImagesViewDelegate> _delegate;
    NSArray *_images;
    NSMutableArray *_imageButtons;
}

@property (strong, nonatomic) NUIContainerGridView *contentView; // @dynamic contentView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TLKImagesViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *imageButtons; // @synthesize imageButtons=_imageButtons;
@property (strong, nonatomic) NSArray *images; // @synthesize images=_images;
@property (nonatomic, getter=isPaddingDisabled) BOOL paddingDisabled; // @synthesize paddingDisabled=_paddingDisabled;
@property (nonatomic, getter=isSelectionEnabled) BOOL selectionEnabled; // @synthesize selectionEnabled=_selectionEnabled;
@property (readonly) Class superclass;

+ (unsigned long long)rowCountForImageCount:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)_invalidateLayout;
- (void)_updateImages;
- (void)_updateSpacing;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)observedPropertiesChanged;
- (id)setupContentView;
- (BOOL)usesDefaultLayoutMargins;

@end

