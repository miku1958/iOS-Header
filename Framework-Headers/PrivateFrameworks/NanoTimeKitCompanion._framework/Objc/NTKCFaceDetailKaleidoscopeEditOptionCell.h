//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionCell.h>

@protocol NTKCFaceDetailKaleidoscopeEditOptionCellDelegate;

@interface NTKCFaceDetailKaleidoscopeEditOptionCell : NTKCFaceDetailEditOptionCell
{
    id<NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> delegate;
    long long _userOptionIndex;
}

@property (weak, nonatomic) id<NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> delegate; // @synthesize delegate;
@property (nonatomic) long long userOptionIndex; // @synthesize userOptionIndex=_userOptionIndex;

- (void).cxx_destruct;
- (void)_setupFromCollection;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)selectUserOption;

@end

