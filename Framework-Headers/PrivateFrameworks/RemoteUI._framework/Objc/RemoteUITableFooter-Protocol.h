//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/NSObject-Protocol.h>

@class NSDictionary, NSString, UITableView;
@protocol RUITableFooterDelegate;

@protocol RemoteUITableFooter <NSObject>
- (double)footerHeightForWidth:(double)arg1 inTableView:(UITableView *)arg2;
- (id)initWithAttributes:(NSDictionary *)arg1;

@optional
- (void)setDelegate:(id<RUITableFooterDelegate>)arg1;
- (void)setText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
@end

