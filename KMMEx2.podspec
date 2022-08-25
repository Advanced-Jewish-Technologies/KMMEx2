Pod::Spec.new do |spec|
  spec.name = 'KMMEx2'
  spec.version = '1.0.0'
  spec.homepage = 'https://github.com/Advanced-Jewish-Technologies/KMMEx2'
  spec.source = { :git => 'https://github.com/Advanced-Jewish-Technologies/KMMEx2', :tag => s.version.to_s }
  spec.authors = 'DarkSatyr'
  spec.license = ''
  spec.summary = 'An example project'
  spec.static_framework = true
  spec.vendored_frameworks = "ExampleProject.framework"
  spec.ios.deployment_target = '13.0'
end
