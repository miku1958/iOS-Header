//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUITableViewSection.h>

@class SKUIClientContext;

@interface SKUIProductPageTableSection : SKUITableViewSection
{
    SKUIClientContext *_clientContext;
    BOOL _expanded;
}

@property (strong, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;

- (void).cxx_destruct;
- (double)heightForTextLayout:(id)arg1 isExpanded:(BOOL)arg2;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (id)textBoxTableViewCellForTableView:(id)arg1 indexPath:(id)arg2;

@end

