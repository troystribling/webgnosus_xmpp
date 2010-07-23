//
//  XMPPPubSubSubscribeDelegate.h
//  webgnosus
//
//  Created by Troy Stribling on 9/24/09.
//  Copyright 2009 Plan-B Research. All rights reserved.
//

//-----------------------------------------------------------------------------------------------------------------------------------
#import <Foundation/Foundation.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
@interface XMPPPubSubSubscribeDelegate : NSObject {
    NSString* node;
}

//-----------------------------------------------------------------------------------------------------------------------------------
@property (nonatomic, retain) NSString* node;

//-----------------------------------------------------------------------------------------------------------------------------------
- (id)init:(NSString*)initNode;

@end
