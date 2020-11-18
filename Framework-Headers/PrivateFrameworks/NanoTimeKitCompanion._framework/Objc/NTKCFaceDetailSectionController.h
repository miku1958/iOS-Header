//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NTKCDetailTableViewCell, NTKCFaceDetailSectionHeaderView, NTKFace, UITableView;

@interface NTKCFaceDetailSectionController : NSObject
{
    BOOL _inGallery;
    BOOL _hasSpacerRow;
    long long _section;
    NSString *_titleForHeader;
    NTKFace *_face;
    UITableView *_tableView;
    NTKCDetailTableViewCell *_cell;
    NSMutableArray *_rows;
    NTKCFaceDetailSectionHeaderView *_headerView;
}

@property (strong, nonatomic) NTKCDetailTableViewCell *cell; // @synthesize cell=_cell;
@property (weak, nonatomic) NTKFace *face; // @synthesize face=_face;
@property (nonatomic) BOOL hasSpacerRow; // @synthesize hasSpacerRow=_hasSpacerRow;
@property (strong, nonatomic) NTKCFaceDetailSectionHeaderView *headerView; // @synthesize headerView=_headerView;
@property (nonatomic) BOOL inGallery; // @synthesize inGallery=_inGallery;
@property (readonly, nonatomic) long long numberOfRows;
@property (strong, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property (nonatomic) long long section; // @synthesize section=_section;
@property (weak, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property (readonly, nonatomic) NSString *titleForHeader; // @synthesize titleForHeader=_titleForHeader;

+ (void)registerForTableView:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_canSelectRow:(long long)arg1;
- (void)_commonInit;
- (double)_heightForSpacerRow;
- (id)_newSectionHeader;
- (id)_spacerRow;
- (BOOL)canSelectRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (void)didSelectRow:(long long)arg1;
- (void)faceDidChange;
- (void)faceDidChangeResourceDirectory;
- (double)heightForHeaderView;
- (double)heightForRow:(long long)arg1;
- (id)initWithTableView:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3;

@end
