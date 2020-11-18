//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKDetailsCell.h>

#import <ChatKit/CKDetailsCell-Protocol.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface CKGroupPhotoCell : CKDetailsCell <CKDetailsCell>
{
    UIView *_groupView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIView *groupView; // @synthesize groupView=_groupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;
+ (BOOL)shouldHighlight;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end
