//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DialogEngine/DENode.h>

@class DESpeakableString, NSString;

@interface DEDialog : DENode
{
    shared_ptr_bd7e2fee _This;
}

@property shared_ptr_bd7e2fee This; // @synthesize This=_This;
@property DESpeakableString *caption;
@property DESpeakableString *content;
@property (strong) NSString *id;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getExpandedCaption:(id)arg1;
- (id)getExpandedContent:(id)arg1;
- (id)init;
- (id)initWithSharedPtr:(shared_ptr_bd7e2fee)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSelectable:(id)arg1;
- (BOOL)validate:(id)arg1;

@end
