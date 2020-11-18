//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKConversationListEmbeddedCollectionViewCell.h>

#import <ChatKit/CKConversationListCellDelegate-Protocol.h>

@class NSObject, NSString;
@protocol CKConversationListCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface CKConversationListNewMessageCollectionViewCell : CKConversationListEmbeddedCollectionViewCell <CKConversationListCellDelegate>
{
    NSObject<CKConversationListCollectionViewCellDelegate> *_delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKConversationListCollectionViewCellDelegate> *delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)embeddedTableViewCellClass;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)didHoverOverCell:(id)arg1;
- (id)embeddedNewMessageTableViewCell;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)selectedDeleteButtonForConversation:(id)arg1 inCell:(id)arg2;
- (void)updateFontSize;

@end
