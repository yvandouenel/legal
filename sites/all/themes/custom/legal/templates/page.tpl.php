<section id="top_bar">
  <div class="container">
    <?php print render($page['top_bar']); ?>
  </div>
</section>
<header id="head_band">
  <div style="background-color: #070801;height:135px;">
    <div class="container" >
      <div class="grid-12">
        <h1 id="eric_legal"><a href="<?php print $front_page; ?>"><img src="<?php print base_path() . path_to_theme(); ?>/images/logo-eric-le-gal.jpg" alt="Eric Le Gal Architecte"></a></h1>
      </div>
    </div>
  </div>
  <div class="container">
    <div class="grid-12">
      <nav id="main_menu">
        <?php print render($page['main_menu']); ?>
      </nav>
    </div>
    <!--
    <div class="grid-6">
      <nav id="secondary_menu">
        <?php /*print render($page['secondary_menu']); */?>
      </nav>
    </div>
    -->
  </div>
</header>
<section id="main_content">
  <div class="big-container">
    <?php print render($page['above_content']); ?>
  </div>
  <div class="container">
    <div class='grid-12' class='clearfix'>
      <?php if ($messages): ?>
      <div id="messages"><div class="section clearfix">
        <?php print $messages; ?>
      </div></div> <!-- /.section, /#messages -->
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php if ($title): ?>
          <h2 class="title" id="page-title">
            <?php print $title; ?>
          </h2>
        <?php endif; ?>
        <?php if ($tabs): ?>
          <div class="tabs">
            <?php print render($tabs); ?>
          </div>
        <?php endif; ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?>
          <ul class="action-links">
            <?php print render($action_links); ?>
          </ul>
        <?php endif; ?>

        <?php print render($page['content']); ?>
    </div>
    <?php if ($page['home_col1']): ?>
      <div class='grid-12'><?php print render($page['home_col1']) ?></div>
    <?php endif; ?>
    <?php if ($page['home_col2']): ?>
      <div class='grid-6'><?php print render($page['home_col2']) ?></div>
    <?php endif; ?>
    <?php if ($page['home_col3']): ?>
      <div class='grid-6'><?php print render($page['home_col3']) ?></div>
    <?php endif; ?>
</div>
</section>
<footer id="main_footer">

    <div class="cols-footer container">
      <?php if ($page['footer_col1']): ?>
        <div class='grid-12 grid'><?php print render($page['footer_col1']) ?></div>
      <?php endif; ?>

   </div>
</footer> 