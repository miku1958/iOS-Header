//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <SearchUI/UICollectionViewDataSource-Protocol.h>
#import <SearchUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSString, SearchUIRowFormatter;

@interface SearchUINowPlayingCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSArray *_movies;
    SearchUIRowFormatter *_formatter;
    unsigned long long _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) SearchUIRowFormatter *formatter; // @synthesize formatter=_formatter;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *movies; // @synthesize movies=_movies;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithResult:(id)arg1 style:(unsigned long long)arg2;

@end

