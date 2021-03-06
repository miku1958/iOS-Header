//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUI/PXSettingsKeyObserver-Protocol.h>

@class NSLayoutConstraint, NSString, PUSearchResultsIndexingProgressView, UIButton, UILabel;
@protocol PUSearchResultsFooterViewDelegate;

__attribute__((visibility("hidden")))
@interface PUSearchResultsFooterView : UIView <PXSettingsKeyObserver>
{
    id<PUSearchResultsFooterViewDelegate> _delegate;
    UILabel *_noResultsLabel;
    PUSearchResultsIndexingProgressView *_indexingProgressView;
    UILabel *_descriptionLabel;
    UIButton *_tapToRadarButton;
    NSLayoutConstraint *_indexingViewToNoResultsConstraint;
    NSLayoutConstraint *_indexingViewToSelfConstraint;
    NSLayoutConstraint *_fileRadarToIndexViewConstraint;
    NSLayoutConstraint *_fileRadarToNoResultsConstraint;
    NSLayoutConstraint *_fileRadarToSelfConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUSearchResultsFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (strong, nonatomic) NSLayoutConstraint *fileRadarToIndexViewConstraint; // @synthesize fileRadarToIndexViewConstraint=_fileRadarToIndexViewConstraint;
@property (strong, nonatomic) NSLayoutConstraint *fileRadarToNoResultsConstraint; // @synthesize fileRadarToNoResultsConstraint=_fileRadarToNoResultsConstraint;
@property (strong, nonatomic) NSLayoutConstraint *fileRadarToSelfConstraint; // @synthesize fileRadarToSelfConstraint=_fileRadarToSelfConstraint;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PUSearchResultsIndexingProgressView *indexingProgressView; // @synthesize indexingProgressView=_indexingProgressView;
@property (nonatomic, getter=isIndexingViewHidden) BOOL indexingViewHidden;
@property (strong, nonatomic) NSLayoutConstraint *indexingViewToNoResultsConstraint; // @synthesize indexingViewToNoResultsConstraint=_indexingViewToNoResultsConstraint;
@property (strong, nonatomic) NSLayoutConstraint *indexingViewToSelfConstraint; // @synthesize indexingViewToSelfConstraint=_indexingViewToSelfConstraint;
@property (strong, nonatomic) UILabel *noResultsLabel; // @synthesize noResultsLabel=_noResultsLabel;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIButton *tapToRadarButton; // @synthesize tapToRadarButton=_tapToRadarButton;

+ (id)_preferredBoldLabelFont;
+ (id)_preferredCalloutFont;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_didSelectTapToRadarButton:(id)arg1;
- (void)_updateTapRadarConstraints;
- (void)hideNoResultsContent;
- (id)init;
- (BOOL)isNoResultsContentHidden;
- (struct CGSize)minimumSize;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)showNoResultsContentForString:(id)arg1 suggestionsVisible:(BOOL)arg2;

@end

