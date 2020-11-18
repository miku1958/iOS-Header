//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@interface CKEditableCollectionView : UICollectionView
{
    BOOL _editing;
    struct UIEdgeInsets _marginInsets;
}

@property (nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property (nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;

- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;

@end

