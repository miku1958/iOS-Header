//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <GameCenterUI/UISearchBarDelegate-Protocol.h>

@class GKSearchBar, NSArray, NSNumber, NSString;
@protocol UISearchBarDelegate;

@interface GKSearchBarView : UICollectionReusableView <UISearchBarDelegate>
{
    GKSearchBar *_searchBar;
    NSNumber *_usePadConstraints;
    id<UISearchBarDelegate> _delegate;
    NSArray *_searchBarConstraints;
    double _leadingMargin;
    double _trailingMargin;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UISearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property (strong, nonatomic) GKSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property (strong, nonatomic) NSArray *searchBarConstraints; // @synthesize searchBarConstraints=_searchBarConstraints;
@property (readonly) Class superclass;
@property (nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property (strong, nonatomic) NSNumber *usePadConstraints; // @synthesize usePadConstraints=_usePadConstraints;

+ (double)defaultHeight;
+ (void)initialize;
+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (void)establishSearchBarConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)updateConstraints;

@end

