//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol TSLocationDetectionManagerType

@property (nonatomic, readonly) BOOL authorized;
@property (nonatomic, readonly) BOOL locationServicesEnabled;

- (void)fetchLocationWithCompletion:(void (^)(CLLocation *))arg1;
@end
