//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSTextAttachment.h>

@class UISearchToken, _UISearchTokenAttachmentViewProvider;

__attribute__((visibility("hidden")))
@interface _UISearchTokenAttachment : NSTextAttachment
{
    _UISearchTokenAttachmentViewProvider *_viewProvider;
    UISearchToken *_token;
}

@property (readonly, nonatomic) _UISearchTokenAttachmentViewProvider *_viewProvider; // @synthesize _viewProvider;
@property (readonly, nonatomic) UISearchToken *token; // @synthesize token=_token;

- (void).cxx_destruct;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (id)init;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (id)initWithToken:(id)arg1;
- (void)placeView:(id)arg1 withFrame:(struct CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (BOOL)usesTextAttachmentView;
- (id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;

@end

