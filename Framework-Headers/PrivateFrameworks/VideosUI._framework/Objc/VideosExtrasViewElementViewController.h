//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VideosExtrasElementViewController.h>

@class IKViewElement;

__attribute__((visibility("hidden")))
@interface VideosExtrasViewElementViewController : VideosExtrasElementViewController
{
    BOOL _embedded;
    IKViewElement *_viewElement;
}

@property (nonatomic) BOOL embedded; // @synthesize embedded=_embedded;
@property (readonly, nonatomic) BOOL matchParentHeight;
@property (readonly, nonatomic) long long preferredLayoutAttribute;
@property (readonly, nonatomic) id preferredLayoutGuide;
@property (strong, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;

- (void).cxx_destruct;
- (id)initWithViewElement:(id)arg1;
- (void)viewDidLoad;

@end

