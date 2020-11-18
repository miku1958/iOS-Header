//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarListItem-Protocol.h>

@class NSString, UIView;

@interface AVTAvatarListViewItem : NSObject <AVTAvatarListItem>
{
    UIView *_view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (void)downcastWithRecordHandler:(CDUnknownBlockType)arg1 imageHandler:(CDUnknownBlockType)arg2 viewHandler:(CDUnknownBlockType)arg3;
- (void)downcastWithRecordHandler:(CDUnknownBlockType)arg1 viewHandler:(CDUnknownBlockType)arg2;
- (id)initWithView:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

