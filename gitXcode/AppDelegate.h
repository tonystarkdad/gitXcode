//
//  AppDelegate.h
//  gitXcode
//
//  Created by Mac1 on 07/08/2018.
//  Copyright © 2018 Mac1. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;


@end

