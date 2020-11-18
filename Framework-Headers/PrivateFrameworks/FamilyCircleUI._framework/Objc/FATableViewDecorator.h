//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/FATableViewProtocol-Protocol.h>
#import <FamilyCircleUI/UITableViewDataSource-Protocol.h>
#import <FamilyCircleUI/UITableViewDelegate-Protocol.h>

@class NSString;
@protocol FATableViewProtocol, UITableViewDataSource, UITableViewDelegate;

@interface FATableViewDecorator : NSObject <FATableViewProtocol, UITableViewDelegate, UITableViewDataSource>
{
    id<UITableViewDataSource> _dataSource;
    id<UITableViewDelegate> _delegate;
    id<FATableViewProtocol> _tableView;
}

@property (weak, nonatomic) id<UITableViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UITableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<FATableViewProtocol> tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithTableView:(id)arg1;
- (void)reloadData;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
