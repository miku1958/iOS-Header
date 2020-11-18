//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Stocks/StockChartViewDelegate-Protocol.h>
#import <Stocks/UITableViewDataSource-Protocol.h>
#import <Stocks/UITableViewDelegate-Protocol.h>

@class ChartUpdater, NSString, NetPreferences, Stock, StockChartView, StockFetcher, StockManager, StockUpdateManager, StocksLayout, StocksStyle, UIButton, UILabel, UITableView, UIView;

@interface StockPlatterViewController : UIViewController <StockChartViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    StockFetcher *_stockFetcher;
    Stock *_stock;
    long long _chartInterval;
    UITableView *_stocksTableView;
    UIView *_statusBarView;
    NetPreferences *_netPreferences;
    StockUpdateManager *_stockUpdateManager;
    StockChartView *_chartView;
    ChartUpdater *_chartUpdater;
    StocksStyle *_style;
    StocksLayout *_layout;
    StockManager *_stockManager;
    UIButton *_attributionButton;
    UILabel *_exchangeStatusLabel;
    NSString *_stockTicker;
    long long _rowDataType;
}

@property (strong, nonatomic) UIButton *attributionButton; // @synthesize attributionButton=_attributionButton;
@property (nonatomic) long long chartInterval; // @synthesize chartInterval=_chartInterval;
@property (strong, nonatomic) ChartUpdater *chartUpdater; // @synthesize chartUpdater=_chartUpdater;
@property (strong, nonatomic) StockChartView *chartView; // @synthesize chartView=_chartView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILabel *exchangeStatusLabel; // @synthesize exchangeStatusLabel=_exchangeStatusLabel;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) StocksLayout *layout; // @synthesize layout=_layout;
@property (strong, nonatomic) NetPreferences *netPreferences; // @synthesize netPreferences=_netPreferences;
@property (nonatomic) long long rowDataType; // @synthesize rowDataType=_rowDataType;
@property (strong, nonatomic) UIView *statusBarView; // @synthesize statusBarView=_statusBarView;
@property (strong, nonatomic) Stock *stock; // @synthesize stock=_stock;
@property (strong, nonatomic) StockFetcher *stockFetcher; // @synthesize stockFetcher=_stockFetcher;
@property (strong, nonatomic) StockManager *stockManager; // @synthesize stockManager=_stockManager;
@property (strong, nonatomic) NSString *stockTicker; // @synthesize stockTicker=_stockTicker;
@property (strong, nonatomic) StockUpdateManager *stockUpdateManager; // @synthesize stockUpdateManager=_stockUpdateManager;
@property (strong, nonatomic) UITableView *stocksTableView; // @synthesize stocksTableView=_stocksTableView;
@property (strong, nonatomic) StocksStyle *style; // @synthesize style=_style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_attributionButtonPressed:(id)arg1;
- (void)_cleanup;
- (void)_setupStockWithTicker:(id)arg1;
- (void)_updateExchangeData;
- (void)dealloc;
- (id)initWithStockTicker:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)stockChartView:(id)arg1 chartIntervalDidChange:(long long)arg2;
- (BOOL)stockChartViewIsCurrentChartView:(id)arg1;
- (void)stockChartViewNeedsLoadingStatusUpdated:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateChartForInterval:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;

@end

