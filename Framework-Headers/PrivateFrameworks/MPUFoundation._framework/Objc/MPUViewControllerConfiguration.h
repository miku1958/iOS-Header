//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPUDataSourceConfiguration, NSString;

@interface MPUViewControllerConfiguration : NSObject
{
    BOOL _wantsModalPresentation;
    BOOL _wantsNavigationController;
    Class _cellConfigurationClass;
    Class _viewControllerClass;
    NSString *_aggregateStatisticDisplayCountKey;
    MPUDataSourceConfiguration *_dataSourceConfiguration;
    CDUnknownBlockType _configurationBlock;
    Class _navigationControllerClass;
}

@property (copy, nonatomic) NSString *aggregateStatisticDisplayCountKey; // @synthesize aggregateStatisticDisplayCountKey=_aggregateStatisticDisplayCountKey;
@property (readonly, nonatomic) Class cellConfigurationClass; // @synthesize cellConfigurationClass=_cellConfigurationClass;
@property (copy, nonatomic) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property (strong, nonatomic) MPUDataSourceConfiguration *dataSourceConfiguration; // @synthesize dataSourceConfiguration=_dataSourceConfiguration;
@property (strong, nonatomic) Class navigationControllerClass; // @synthesize navigationControllerClass=_navigationControllerClass;
@property (readonly, nonatomic) Class viewControllerClass; // @synthesize viewControllerClass=_viewControllerClass;
@property (nonatomic) BOOL wantsModalPresentation; // @synthesize wantsModalPresentation=_wantsModalPresentation;
@property (nonatomic) BOOL wantsNavigationController; // @synthesize wantsNavigationController=_wantsNavigationController;

+ (id)configurationWithViewControllerClass:(Class)arg1;
+ (id)configurationWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2;
- (void).cxx_destruct;
- (id)initWithViewControllerClass:(Class)arg1;
- (id)initWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2;

@end

